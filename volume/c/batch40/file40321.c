// fichero 40321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40321;

Registro40321 crear_registro40321(int id) {
    Registro40321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
