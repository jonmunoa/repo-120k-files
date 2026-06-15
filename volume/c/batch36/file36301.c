// fichero 36301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36301;

Registro36301 crear_registro36301(int id) {
    Registro36301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
