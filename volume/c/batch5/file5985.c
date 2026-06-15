// fichero 5985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5985;

Registro5985 crear_registro5985(int id) {
    Registro5985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
