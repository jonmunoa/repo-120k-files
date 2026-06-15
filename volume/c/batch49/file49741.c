// fichero 49741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49741;

Registro49741 crear_registro49741(int id) {
    Registro49741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
