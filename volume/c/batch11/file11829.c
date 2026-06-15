// fichero 11829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11829;

Registro11829 crear_registro11829(int id) {
    Registro11829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
