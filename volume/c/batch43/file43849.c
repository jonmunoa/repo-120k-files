// fichero 43849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43849;

Registro43849 crear_registro43849(int id) {
    Registro43849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
