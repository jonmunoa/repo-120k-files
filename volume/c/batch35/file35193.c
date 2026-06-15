// fichero 35193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35193;

Registro35193 crear_registro35193(int id) {
    Registro35193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
