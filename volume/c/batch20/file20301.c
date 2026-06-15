// fichero 20301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20301;

Registro20301 crear_registro20301(int id) {
    Registro20301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
