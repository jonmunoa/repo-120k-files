// fichero 5793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5793;

Registro5793 crear_registro5793(int id) {
    Registro5793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
