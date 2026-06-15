// fichero 17637 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17637;

Registro17637 crear_registro17637(int id) {
    Registro17637 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
