// fichero 8309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8309;

Registro8309 crear_registro8309(int id) {
    Registro8309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
