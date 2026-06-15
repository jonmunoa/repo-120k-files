// fichero 34081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34081;

Registro34081 crear_registro34081(int id) {
    Registro34081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
