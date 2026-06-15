// fichero 36193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36193;

Registro36193 crear_registro36193(int id) {
    Registro36193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
