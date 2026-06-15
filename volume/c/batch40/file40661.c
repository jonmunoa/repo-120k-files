// fichero 40661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40661;

Registro40661 crear_registro40661(int id) {
    Registro40661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
