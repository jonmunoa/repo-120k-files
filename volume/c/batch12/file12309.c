// fichero 12309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12309;

Registro12309 crear_registro12309(int id) {
    Registro12309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
