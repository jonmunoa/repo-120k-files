// fichero 35493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35493;

Registro35493 crear_registro35493(int id) {
    Registro35493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
