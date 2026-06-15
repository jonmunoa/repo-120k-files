// fichero 869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro869;

Registro869 crear_registro869(int id) {
    Registro869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
