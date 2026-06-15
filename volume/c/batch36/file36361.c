// fichero 36361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36361;

Registro36361 crear_registro36361(int id) {
    Registro36361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
