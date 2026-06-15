// fichero 44869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44869;

Registro44869 crear_registro44869(int id) {
    Registro44869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
