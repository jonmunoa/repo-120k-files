// fichero 4041 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4041;

Registro4041 crear_registro4041(int id) {
    Registro4041 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
