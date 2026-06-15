// fichero 34357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34357;

Registro34357 crear_registro34357(int id) {
    Registro34357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
