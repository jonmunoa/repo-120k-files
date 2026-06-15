// fichero 34645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34645;

Registro34645 crear_registro34645(int id) {
    Registro34645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
