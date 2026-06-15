// fichero 40745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40745;

Registro40745 crear_registro40745(int id) {
    Registro40745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
