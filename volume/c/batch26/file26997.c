// fichero 26997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26997;

Registro26997 crear_registro26997(int id) {
    Registro26997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
