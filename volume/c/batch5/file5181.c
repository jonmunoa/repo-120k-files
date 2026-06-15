// fichero 5181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5181;

Registro5181 crear_registro5181(int id) {
    Registro5181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
