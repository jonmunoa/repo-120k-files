// fichero 27445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27445;

Registro27445 crear_registro27445(int id) {
    Registro27445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
