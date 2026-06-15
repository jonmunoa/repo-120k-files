// fichero 6513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6513;

Registro6513 crear_registro6513(int id) {
    Registro6513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
