// fichero 34129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34129;

Registro34129 crear_registro34129(int id) {
    Registro34129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
