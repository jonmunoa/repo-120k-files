// fichero 11917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11917;

Registro11917 crear_registro11917(int id) {
    Registro11917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
