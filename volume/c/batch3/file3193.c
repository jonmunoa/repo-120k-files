// fichero 3193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3193;

Registro3193 crear_registro3193(int id) {
    Registro3193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
