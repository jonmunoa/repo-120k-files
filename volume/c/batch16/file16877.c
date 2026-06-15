// fichero 16877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16877;

Registro16877 crear_registro16877(int id) {
    Registro16877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
