// fichero 11205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11205;

Registro11205 crear_registro11205(int id) {
    Registro11205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
