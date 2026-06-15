// fichero 7869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7869;

Registro7869 crear_registro7869(int id) {
    Registro7869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
