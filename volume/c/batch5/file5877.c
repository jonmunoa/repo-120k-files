// fichero 5877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5877;

Registro5877 crear_registro5877(int id) {
    Registro5877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
