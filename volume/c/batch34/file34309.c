// fichero 34309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34309;

Registro34309 crear_registro34309(int id) {
    Registro34309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
