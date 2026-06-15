// fichero 34513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34513;

Registro34513 crear_registro34513(int id) {
    Registro34513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
