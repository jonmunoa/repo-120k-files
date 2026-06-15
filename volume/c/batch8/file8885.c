// fichero 8885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8885;

Registro8885 crear_registro8885(int id) {
    Registro8885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
