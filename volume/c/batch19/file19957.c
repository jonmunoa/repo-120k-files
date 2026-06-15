// fichero 19957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19957;

Registro19957 crear_registro19957(int id) {
    Registro19957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
