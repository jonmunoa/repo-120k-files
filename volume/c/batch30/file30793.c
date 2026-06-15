// fichero 30793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30793;

Registro30793 crear_registro30793(int id) {
    Registro30793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
