// fichero 8361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8361;

Registro8361 crear_registro8361(int id) {
    Registro8361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
