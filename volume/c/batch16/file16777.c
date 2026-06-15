// fichero 16777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16777;

Registro16777 crear_registro16777(int id) {
    Registro16777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
