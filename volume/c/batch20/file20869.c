// fichero 20869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20869;

Registro20869 crear_registro20869(int id) {
    Registro20869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
