// fichero 34997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34997;

Registro34997 crear_registro34997(int id) {
    Registro34997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
