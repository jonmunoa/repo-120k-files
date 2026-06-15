// fichero 20829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20829;

Registro20829 crear_registro20829(int id) {
    Registro20829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
