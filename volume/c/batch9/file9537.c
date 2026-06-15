// fichero 9537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9537;

Registro9537 crear_registro9537(int id) {
    Registro9537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
