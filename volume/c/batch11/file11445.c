// fichero 11445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11445;

Registro11445 crear_registro11445(int id) {
    Registro11445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
