// fichero 11265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11265;

Registro11265 crear_registro11265(int id) {
    Registro11265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
