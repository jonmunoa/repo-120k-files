// fichero 9957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9957;

Registro9957 crear_registro9957(int id) {
    Registro9957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
