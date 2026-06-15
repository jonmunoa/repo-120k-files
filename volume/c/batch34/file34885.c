// fichero 34885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34885;

Registro34885 crear_registro34885(int id) {
    Registro34885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
