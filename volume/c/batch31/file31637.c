// fichero 31637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31637;

Registro31637 crear_registro31637(int id) {
    Registro31637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
