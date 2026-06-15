// fichero 34945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34945;

Registro34945 crear_registro34945(int id) {
    Registro34945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
