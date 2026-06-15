// fichero 9145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9145;

Registro9145 crear_registro9145(int id) {
    Registro9145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
