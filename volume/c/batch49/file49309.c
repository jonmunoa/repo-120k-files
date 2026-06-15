// fichero 49309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49309;

Registro49309 crear_registro49309(int id) {
    Registro49309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
