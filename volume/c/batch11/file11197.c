// fichero 11197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11197;

Registro11197 crear_registro11197(int id) {
    Registro11197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
