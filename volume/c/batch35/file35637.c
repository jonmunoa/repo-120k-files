// fichero 35637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35637;

Registro35637 crear_registro35637(int id) {
    Registro35637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
