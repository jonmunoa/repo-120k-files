// fichero 35845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35845;

Registro35845 crear_registro35845(int id) {
    Registro35845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
