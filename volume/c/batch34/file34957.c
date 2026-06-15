// fichero 34957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34957;

Registro34957 crear_registro34957(int id) {
    Registro34957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
